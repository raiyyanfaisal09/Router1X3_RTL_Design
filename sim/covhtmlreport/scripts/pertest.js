function GetScopeIdBinIdClass() {
	this.scopeId;
	this.binId;
	
	var qs = location.search.substring(1, location.search.length);
	var args = qs.split('&');
	var pair;
	
	pair = args[0].split('=');
	this.binId = pair[1];
	
	pair = args[1].split('=');
	this.scopeId = pair[1];
}
GetScopeIdBinIdClass.prototype.getBinId = function() {
	return this.binId;
}
GetScopeIdBinIdClass.prototype.getScopeId = function() {
	return this.scopeId;
}

var myObj = new GetScopeIdBinIdClass();
var scopeId = myObj.getScopeId();
var binId = myObj.getBinId();

var headID = document.getElementsByTagName("head")[0];
var jsonScript = document.createElement('script');
jsonScript.type = "text/javascript";
jsonScript.src = "p" + scopeId + ".json";
headID.appendChild(jsonScript);

function processJSON() { /* called by the JSON file */
	var tables = document.getElementsByTagName("TABLE");
	var rows = tables[0].rows; // single table in the page
	for (var i=1 ; i<rows.length; i++) { // start from 1 to skip the header row
		rows[i].cells[1].innerHTML = getCellValue(binData[binId][i-1]);
	}
}
