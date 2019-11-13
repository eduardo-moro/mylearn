

<?php
$db = new SQLite3('dafile.db');
session_destroy();
session_start();
$_SESSION['email'] = '';
echo $_SESSION['email'];
if($_SESSION["email"] != ''){
  header('location: '."../nada_por_aqui.php");
}
?>

<head>
  <link rel="stylesheet" href="../CSS/login.css">
</head>

<h1><a class="h1" href="../index.php">hello tads!</a></h1>

<div class = "box">
  <form class="login" method="POST">
    <input type="email" autocomplete="email" placeholder="quem quer passar?"name="email" value="">  <br>
    <input type="password" autocomplete="password" placeholder="qual a palavra magica?"name="senha" value=""><br>
    <button type="submit" name="submit">entrar!</button>
    <a class="link" href="../forgot.php"><p>esqueceu a senha?</p></a>
    <a class="link" href="../new.php"><p>novo por aqui?</p></a>
  </form>
</div>

<?php
$email = $_POST['email'];
$senha = md5($_POST['senha']);



if(isset($_POST['submit'])){

  $view = ('SELECT  usuario_id, nome, data, email, senha from usuarios where email = \''. $email.'\'');
  $res = $db->query($view);
  while($row = $res->fetchArray(SQLITE3_BOTH)){
    $ver = $row['email'];
    $sen = $row['senha'];
  }
  echo'<br>';
  if (($ver == $email) && ($sen == $senha)){
    $_SESSION["email"] = $_POST['email'];
    header('location: '."../index.php");
  }
}
?>
