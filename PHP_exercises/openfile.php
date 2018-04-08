<?php
$myfile = fopen("text.txt", "a") or die("Unable to open file!");
$name1 = "Vincent Liu";
$name2 = "Claire Lin";
$txt = "\n" . $name1 . "\n" . $name2 . "\n";
fwrite($myfile, $txt);
fclose($myfile);
?>
