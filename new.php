<head>
  <link rel="stylesheet" href="../CSS/login.css">
  <link rel="stylesheet" href="../CSS/animateinvalid.css">
</head>


<?php
$db = new SQLite3('dafile.db');
session_destroy();
session_start();
$_SESSION['email'];

?>



<h1><a class="h1" href="../index.php">hello tads!</a></h1>

<div class = "box">
  <form class="novo" method="POST">
    <input type="name" placeholder="qual é seu nome?"name="nome" value="">  <br>
    <input type="email" placeholder="qual é seu email?"name="email" value="">  <br>
    <input type="password" placeholder="hmm, voce precisa de uma senha"name="senha" value=""><br>
    <input type="password" placeholder="tem certeza de que vai ser essa senha?"name="senhaver" value=""><br>
    <button type="submit" name="submit">tudo pronto, me deixa continuar</button>
    <a class="link" href="../forgot.php"><p>esqueceu a senha?</p></a>
    <a class="link" href="../index.php"><p>voltar pro começo</p></a>
  </div>
</form>
<div class="erro">algo esta errado, tente novamente</div>

<?php


if(isset($_POST['submit'])){
  $nome = $_POST['nome'];
  $email = $_POST['email'];
  $senha = md5($_POST['senha']);
  $data =   date("Y-m-d");
  $adds = ("INSERT INTO usuarios(nome,email,senha,data) VALUES (\"".$nome."\",\"".$email."\",\"".$senha."\",\"".$data."\")");
  $do = $db->query($adds);
  if($do){
    header('location: '."../index.php");
  };
}

?>
