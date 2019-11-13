
<head>
  <?php session_start();?>
  <title>ola meu jovem!</title>
  <link rel="stylesheet" href="../CSS/main.css">
</head>

<form class="" action="../index.php" method="POST">
  <a type="button" href="../nada_por_aqui.php" class="sair" name="button">sair</a>
</form>

<h1><a class="h1" href="../index.php">hello tads!</a></h1>

<button class="novo"><a class="add" href="../add.php" name="novo"> + </a></button>
<?php


if($_SESSION["email"] == ''){
  header('location: '."../nada_por_aqui.php");
} ?>

<?php

$db = new SQLite3('dafile.db');
$view = ('SELECT url, id_autor, title, description, data_criacao from code');
$res = $db->query($view);

echo '<ul><div class = "box">';

while($row = $res->fetchArray(SQLITE3_BOTH)){
  echo '
  <li>',

  '<h3><a href="',
  $row["url"                ],'">',
  $row["title"              ],'</a>','</h3><h4>',
  $row["description"        ],'</h4>','<p class ="data">',
  implode(" · ",array_reverse(explode('-',$row["data_criacao"]))),'</p><hr>
  </li>';
}

echo "</div></ul>";

if(isset($_POST['button'])){
  session_destroy();
  header('location: '."../index.php");
}



?>
