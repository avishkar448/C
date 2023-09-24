<?php
    // $name=$_GET["name"];
    // if($name==""){ 
    //     echo"";
    // }
    // else if($name=="avi"|| $name="abhay"){ 
    //     echo"Hello master!!";
    // }
    // else{
    //     echo"";
    // }

    $q=$_REQUEST["name"];
    $hint=("avishkar","Rahul");
    if($q!=""){ 
        $hint=$q;
    }
    echo"$hint";
?>