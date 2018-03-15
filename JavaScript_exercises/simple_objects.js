// Object 1
var Person = {
    name: "Vincent",
    age: 35,
    print: function() {
        console.log("name: %s\nage: %d", this.name, this.age);
    }
}

Person.print();

// Object 2
var Circle = {
    r: 3,
    area: function() {
        return Math.PI*(this.r**2);
    }
}

console.log("Radius: %d\nArea: %d", Circle.r, Circle.area());
