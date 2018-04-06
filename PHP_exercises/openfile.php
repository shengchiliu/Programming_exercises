<?php
$myfile = fopen("text.txt", "a") or die("Unable to open file!");
$txt = "Vincent Liu\n";
fwrite($myfile, $txt);
$txt = "Claire Lin\n";
fwrite($myfile, $txt);
fclose($myfile);
?>
