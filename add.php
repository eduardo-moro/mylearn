<head>
  <?php session_start();?>
  <title>ola meu jovem!</title>
  <link rel="stylesheet" href="../CSS/main.css">
</head>

<form class="" action="../index.php" method="POST">
  <a type="button" href="../nada_por_aqui.php" class="sair" name="button">sair</a>
</form>

<h1><a class="h1" href="../index.php">hello tads!</a></h1>

<?php


if($_SESSION["email"] == ''){
  header('location: '."../nada_por_aqui.php");
} ?>

<div class="box">
   <input class="box__file" type="file" name="files[]" id="file" data-multiple-caption="{count} files selected" multiple/>
</div>
