
<!DOCTYPE html>
<html lang="en" dir="ltr">
  <head>
    <link rel="stylesheet" href="../CSS/main.css">
    <meta charset="utf-8">
    <title></title>
  </head>
  <body>
 <a class = "init" href="../">voltar ao inicio</a>

<pre>
  <code>

function color($id){
  $obj = document.getElementById($id);
  if($obj.style.background == "rgb(0, 255, 0)"){
    $obj.style.background = "rgb(255, 255, 0)";
  }else if($obj.style.background == "rgb(255, 255, 0)"){
    $obj.style.background = "rgb(0, 255, 0)";
  }

  console.log($obj.style.background);
}

  </code>
</pre>



<footer>
 <a class = "init" href="../">voltar ao inicio</a>
</footer>

</body>
</html>
