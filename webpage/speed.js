window.onload = function() {
  displaySpeed(90);
};

function displaySpeed(speed) {
  ms = speed * 3.6;
  if(ms > 40){
    document.getElementById("ticket").style.backgroundColor = '#a31313';
    document.getElementById('display-msg').innerHTML = 'Slow down asshole, you might kill someone';
  }
  else {
    document.getElementById("ticket").style.backgroundColor = '#3b9b28';
    document.getElementById('display-msg').innerHTML = "You're good, keep it up";
  }
  document.getElementById('speed').innerHTML = ms + 'km/h';
}
