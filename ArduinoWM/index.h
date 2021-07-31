const char MAIN_page[] PROGMEM = R"=====(

<!DOCTYPE html>

<!DOCTYPE html>
<html>
<head>
<meta name="viewport" content="width=device-width, initial-scale=1.0">
<style>
* {
    box-sizing: border-box;
}
input[type=data] {
    width: 50%;
    padding: 6px 20px;
    margin: 4px 0;
    box-sizing: border-box;
    border: 3px solid #ccc;
    -webkit-transition: 0.5s;
    transition: 0.5s;
    outline: none;
}
input[type=data]:focus {
    border: 3px solid #555;
    }
table {
    border-collapse: collapse;
    width: 100%;
    margin: 20px 0;
}

th, td {
    text-align: left;
    padding: 8px;
}
.row::after {
    content: "";
    clear: both;
    display: table;
}
[class*="col-"] {
    float: left;
    padding: 15px;
}
html {
    font-family: "Lucida Sans", sans-serif;
}
.header {
    background-color: #9933cc;
    color: #ffffff;
    padding: 15px;
}
.menu ul {
    list-style-type: none;
    margin: 0;
    padding: 0;
}
.menu li {
    padding: 8px;
    margin-bottom: 7px;
    background-color: #33b5e5;
    color: #ffffff;
    box-shadow: 0 1px 3px rgba(0,0,0,0.12), 0 1px 2px rgba(0,0,0,0.24);
}
.menu li:hover {
    background-color: #0099cc;
}

table {
    border-collapse: collapse;
    width: 100%;
    margin: 0 0;
}

th, td {
    text-align: left;
    padding: 8px;
}

tr:nth-child(even){background-color: #f2f2f2}
th {
    background-color: #4CAF50;
    color: white;
}
.aside {
    background-color: #33b5e5;
    padding: 15px;
    color: #ffffff;
    text-align: center;
    font-size: 14px;
    box-shadow: 0 1px 3px rgba(0,0,0,0.12), 0 1px 2px rgba(0,0,0,0.24);
}
.footer {
    background-color: #0099cc;
    color: #ffffff;
    text-align: center;
    font-size: 12px;
    padding: 15px;
}
/* For mobile phones: */
[class*="col-"] {
    width: 100%;
}
@media only screen and (min-width: 768px) {
    /* For desktop: */
    .col-1 {width: 8.33%;}
    .col-2 {width: 16.66%;}
    .col-3 {width: 30%;}
    .col-4 {width: 33.33%;}
    .col-5 {width: 41.66%;}
    .col-6 {width: 40%;}
    .col-7 {width: 58.33%;}
    .col-8 {width: 66.66%;}
    .col-9 {width: 75%;}
    .col-10 {width: 83.33%;}
    .col-11 {width: 91.66%;}
    .col-12 {width: 100%;}
}
</style>
</head>
<body>

<div class="header">
  <h1>Counters control panel</h1>
</div>

<div class="row">

<div class="col-3 menu">
<table>
  <tr>
    <th>Enumerator</th>
    <th>Values</th>
  </tr>
  <tr>
    <td>Cold Water #1</td>
    <td>00000,000</td>
  </tr>
  <tr>
    <td>Hot Water #1</td>
    <td>00000,000</td>
  </tr>
  <tr>
    <td>Cold Water #2</td>
    <td>00000,000</td>
  </tr>
  <tr>
    <td>Hot Water #2</td>
    <td>00000,000</td>
  </tr>
  <tr>
    <td>Electricity</td>
    <td>00000,000</td>
  </tr>
  <tr>
    <td>Gas</td>
    <td>00000,000</td>
  </tr>
</table>
</div>

<div class="col-6">
  
  <p>
  <form>
    <label for="fname">Cold Water #1</label>
    <input type="data" id="fname" name="fname" value="00000,000"><br/> 
    <label for="lname">Hot Water #1</label>
    <input type="data" id="lname" name="lname" value="00000,000"><br/> 
  <label for="fname">Cold Water #2</label>
    <input type="data" id="fname" name="fname" value="00000,000"><br/> 
    <label for="lname">Hot Water #2</label>
    <input type="data" id="lname" name="lname" value="00000,000"><br/>
    <label for="fname">Electricity</label>
    <input type="data" id="fname" name="fname" value="00000,000"><br/> 
    <label for="lname">Gas</label>
    <input type="data" id="lname" name="lname" value="00000,000"><br/> 
  </form></p>
<form>
  </p>
</div>

<div class="col-3 right">
  <div class="aside">
    <h2>SNMP</h2>
    <p>SNMP agent settings</p>
    <h2>Direct</h2>
    <p>Settings for direct data sending to Management Company</p>
    <h2>Network</h2>
    <p>Network and connection settings</p>
  </div>
</div>

</div>

<div class="footer">
  <p>By Losenmann https://github.com/Losenmann</p>
</div>

</body>
</html>
)=====";
