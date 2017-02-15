<?php

include "connect.inc";

$nome = $_POST["nome"];
$tipomerc = $_POST["tipomerc"];
$quantidade = $_POST["quantidade"];
$preco = $_POST["preco"];
$tiponeg = $_POST["tiponeg"];

$sql = "INSERT INTO mercadoria ";
$sql .="(mercadorianome, mercadoriatipo, mercadoriaquantidade, mercadoriapreco, mercadoriatiponegocio) "
$sql .=" VALUES ('$nome', '$tipomerc', '$quantidade', '$preco', '$tiponeg')";

$resultado = mysql_query ($sql);

echo "Usuario incluido com sucesso!";

mysql_close($conexao);

?>