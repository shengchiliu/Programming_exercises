<?php
class Colleague {
    var $gender;
    var $age;
    
    function setGender($par) {
        $this->gender = $par;
    }
    
    function getGender() {
        echo $this->gender.PHP_EOL;
    }

    function setAge($par) {
        $this->age = $par;
    }
    
    function getAge() {
        echo $this->age.PHP_EOL;
    }
}

$Vincent = new Colleague;
$Claire  = new Colleague;

$Vincent->setGender("Male");
$Vincent->setAge("25");
$Claire->setGender("Female");
$Claire->setAge("30");

$Vincent->getGender();
$Vincent->getAge();
$Claire->getGender();
$Claire->getAge();

?>

