onload = init;
var mymap;
function init() {
	//Setar para aparecer na posição do usuário
	mymap = L.map('mapid').setView([51.505, -0.09], 13);
	mymap.on('click', onMapClick);
	navigator.geolocation.getCurrentPosition(showPosition);

	navigator.geolocation.getCurrentPosition(showPosition);

	L.tileLayer('https://api.tiles.mapbox.com/v4/{id}/{z}/{x}/{y}.png?access_token={accessToken}', {
		attribution: 'Map data &copy; <a href="https://www.openstreetmap.org/">OpenStreetMap</a> contributors, <a href="https://creativecommons.org/licenses/by-sa/2.0/">CC-BY-SA</a>, Imagery © <a href="https://www.mapbox.com/">Mapbox</a>',
		maxZoom: 18,
		id: 'mapbox.streets',
		//criar seu token no mapbox
		accessToken: 'pk.eyJ1IjoicGVkcm9zY2htaWQiLCJhIjoiY2p3bHk1aXBzMDJteTQ4bW1teWlkZjloYSJ9._UWl21ZfA1LoXHtY1aHVPA'
	}).addTo(mymap);
	//Add Button Listener
	document.getElementById("btn_add").addEventListener("click", f);

}

function onMapClick(event) {
	var lt = event.latlng.lat;
	var lg = event.latlng.lng;
	document.getElementById("lat").value = lt;
	document.getElementById("long").value = lg;
}

function f(event) {
	var lat = document.getElementById("lat").value;
	var long = document.getElementById("long").value;
	var desc = document.getElementById("desc").value;
	var m = L.marker([lat, long]).addTo(mymap);
	m.bindPopup(desc);
	mymap.setView([lat, long], 13);
}
//atualiza a posição
function showPosition(pos) {
	var latitude = pos.coords.latitude;
	var longitude = pos.coords.longitude
	mymap.setView([latitude, longitude]);
	console.log(latitude, longitude);
}

//Função para adicionar marcador


//Challenge: Mostrar a foto do lugar no balão. Dica: desc pode ser um HTML
//Challenge: Auto preencher lat e long ao clicar em algum lugar do mapa