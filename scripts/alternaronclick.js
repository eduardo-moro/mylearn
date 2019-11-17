function alternar($is){
  is = !is;
};

function color($id){
  $obj = document.getElementById($id);
  if($obj.style.background == "rgb(0, 255, 0)"){
    $obj.style.background = "rgb(255, 255, 0)";
  }else if($obj.style.background == "rgb(255, 255, 0)"){
    $obj.style.background = "rgb(0, 255, 0)";
  }
  return 0;
}
