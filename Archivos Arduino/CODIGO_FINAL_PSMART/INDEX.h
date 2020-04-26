
///////PAGINA PRINCIPAL DE LOGIN////////////
const char MAIN_page[] PROGMEM = R"=====(<!DOCTYPE html>            
<html>   

<!-- version 1.0 -->
<head>
<meta charset="utf-8">       
<title>PSMART</title>
<script>
</script>
<style>
h1{
     font-size:30px;
      background:orange;
      color:black;
      text-align: center;
      
      width:400px;
      margin:50px auto;
      background-color:orange;
      border:1px solid #ECE8E8;
      height:85px;
      border-radius:28px;
      padding: 0px 9px 0px 9px; 
      
      
      }

h2{
      text-align: center;
      
            
      
      }
      p
      { 
      text-align: center;
      font-size:25px;
      }
      form
      {
      //background:orange;
      }
      button{
      border-radius:0.8rem;
      background-color:orange;
      font-size:25px;
      color:black;
      
      }
      input
      {
      height:35px;
      font-size:25px;
      width:230px;
      
      }
      
      #contenedor
      {
      width:400px;
      margin:20px auto;
      background-color:#F3EDED;  <!--#F3EDED-->
      border:1px solid #ECE8E8;
      height:350px;
      border-radius:28px;
      padding: 0px 9px 0px 9px; 
      
      }
      #contenedor1
      {
      width:200px;
      margin:20px auto;
      background-color:#F3EDED;  <!--#F3EDED-->
      border:1px solid #ECE8E8;
      height:100px;
      border-radius:28px;
      padding: 0px 9px 0px 9px; 
      
      }
</style>
</head>
<body>
<fieldset>
<legend style="text-align:center;"><h1>Identificacion de Dispositivo PSMART</h1></legend>
       
<form action="http://35.166.19.153/Validar.php" method='post' id="contenedor">
<!--<div class="form-group col-lg-10">-->
<br>

<p>N° de Serie: <input type="text" name="NumeSerie" required /></p>
<br>
<p>Contraseña: <input type="password" name="Contrasena" /></p>
<p>
<br>
<input type='submit' value='Ingresar'>
</form>
</p>

<h2>

<form action='TestModulo' method='get'>
<input type='submit' value='Prueba Timbres' >
</form>
</h2>
<!--</div>-->
</fieldset>
</body>
</html>
)=====";



///////PAGINA DE RESET DE FABRICA///////////////////
const char CerrarMODULO[] PROGMEM = R"=====(<!DOCTYPE html>            
<html>   

<!-- version 1.0 -->
<head>
<meta charset="utf-8">       
<title>PSMART</title>
<script>
</script>
<style>
h1{
     font-size:30px;
      background:orange;
      color:black;
      text-align: center;
      
      width:400px;
      margin:50px auto;
      background-color:orange;
      border:1px solid #ECE8E8;
      height:85px;
      border-radius:28px;
      padding: 0px 9px 0px 9px; 
      
      
      }
      p
      { 
      text-align: center;
      font-size:25px;
      }
      form
      {
      background:orange;
      }
      button{
      border-radius:0.8rem;
      background-color:orange;
      font-size:25px;
      color:black;
      
      }
      input
      {
      height:35px;
      font-size:25px;
      width:230px;
      
      }
      
      #contenedor
      {
      width:400px;
      margin:20px auto;
      background-color:#F3EDED;  <!--#F3EDED-->
      border:1px solid #ECE8E8;
      height:350px;
      border-radius:28px;
      padding: 0px 9px 0px 9px; 
      
      }
</style>
</head>
<body>

<fieldset>
<legend style="text-align:center;"><h1>Identificacion de Dispositivo PSMART</h1></legend>
<form action="http://34.217.210.54/Validar.php" method='post' id="contenedor">
<!--<div class="form-group col-lg-10">-->
<br>
<p>N° de Serie: <input type="text" name="NumeSerie" required /></p>
<br>
<p>Contraseña: <input type="password" name="Contrasena" /></p>
<p>
<br>
<input type='submit' value='Ingresar'>

</p>

<!--</div>-->
</form>

</fieldset>
</body>
</html>
)=====";




////////PAGINA DE PRUEBA DE PULSADORES//////////////

const char TestModulo[] PROGMEM = R"=====(<!DOCTYPE html>            
<html>   

<!-- version 1.0 -->
<head>
<meta charset="utf-8">       
<title>PSMART</title>
<script>
</script>
<style>
h1{
     font-size:30px;
      background:orange;
      color:black;
      text-align: center;
      
      width:400px;
      margin:50px auto;
      background-color:orange;
      border:1px solid #ECE8E8;
      height:85px;
      border-radius:28px;
      padding: 0px 9px 0px 9px; 
      
      
      }
      p
      { 
      text-align: center;
      font-size:25px;
      }
      form
      {
      background:orange;
      }
      button{
      border-radius:0.8rem;
      background-color:orange;
      font-size:25px;
      color:black;
      
      }
      input
      {
      height:35px;
      font-size:25px;
      width:230px;
      
      }
      
      #contenedor
      {
      width:400px;
      margin:20px auto;
      background-color:#F3EDED;  <!--#F3EDED-->
      border:1px solid #ECE8E8;
      height:350px;
      border-radius:28px;
      padding: 0px 9px 0px 9px; 
      
      }
</style>
</head>
<body>


PAGINA DE PREUBA DE TIMBRES

<fieldset>
<legend style="text-align:center;"><h1>Identificacion de Dispositivo PSMART</h1></legend>

          
<form action="http://35.166.19.153/Validar.php" method='post' id="contenedor">

<!--<div class="form-group col-lg-10">-->
<br>

<p>N° de Serie: <input type="text" name="NumeSerie" required /></p>
<br>
<p>Contraseña: <input type="password" name="Contrasena" /></p>
<p>
<br>
<input type='submit' value='Ingresar'>
</p>

<!--</div>-->
</form>

</fieldset>
</body>
</html>
)=====";
