function C2F(celsius) {
  var C = celsius.toFixed(1);
  var F = (C*9/5 + 32).toFixed(1);
  var message = C + '\xB0C = ' + F + '\xB0F.';
  console.log(message);
}

function F2C(fahrenheit)
{
  var F = fahrenheit.toFixed(1);
  var C = ((F - 32)*5/9).toFixed(1);
  var message = F + '\xB0F = ' + C + '\xB0C.';
  console.log(message);
}

C2F(28.0);
F2C(82.4);
