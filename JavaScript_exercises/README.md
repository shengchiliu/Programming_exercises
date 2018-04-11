# JavaScript Programming Exercises

The exercises are from this website:
* https://www.w3resource.com/javascript-exercises/

Also there are useful websites for learning JavaScript:
* https://developer.mozilla.org/bm/docs/Web/JavaScript
* https://mdbookspace.com/view/jsh/
* http://ccckmit.wikidot.com/js:basic (Chinese)

Youtube Tutorial
* https://www.youtube.com/playlist?list=PLqq-6Pq4lTTaflXUL0v3TSm86nodn0c_u

---

### JavaScript Object & Function
```js
// Object Expression
var object = {
    "property0": value,                     // use ":", not "="
    "property1": value                      // without ";"
};

// Function Declaration
function function_name(arguments) {
    descriptions;
    return values;
}                                           // without ";"

// Function Expression
var method = function function_name(arguments) {
    descriptions;
    return values;
};                                          // with ";"

// Anonymous Function Expression
var method = function (arguments) {
    descriptions;
    return values;
};

// Function as Object Property
var object = {}
object.method = function (arguments) {
    return values;
};
result = object.method(arguments);
```

### JavaScript Function and Constructor
```js
// Method 1
var object = {
    "property0": value,
    "property1": value,
    "property2": value
};

// Method 2
function function_name (arguments) {
    var object = {};
    object.attribute0 = value;
    object.attribute1 = value;
    object.attribute2 = value;
    return values;
};
var object = function_name(arguments);

// Method 3
function Constructor (arguments) {
    this.attribute0 = value;
    this.attribute1 = value;
    this.attribute2 = value;
};
var object = new Constructor(arguments);     // "C"onstructor
```
