/*
 * JavaScript functions for show/hide functionality
 *
 *   showAll makes all marked elements visible
 *   showCov makes "covered" elements visible
 *   showMis makes "missing" elements visible
 *
 * Note: Unmarked elements are always visible. Elements marked
 *       as "neutral" are only visible if all elements are set
 *       visible ("tr" elements only).
 */

function showAll()
{
	var x = document.getElementsByTagName('div');
	for (var i = 0; i < x.length; i++)
	{
		if (x[i].className == 'covered') x[i].style.display = 'block';
		if (x[i].className == 'missing') x[i].style.display = 'block';
	}
	var y = document.getElementsByTagName('tr');
	for (var i = 0; i < y.length; i++)
	{
		if (y[i].className == 'covered') y[i].style.display = '';
		if (y[i].className == 'missing') y[i].style.display = '';
		if (y[i].className == 'neutral') y[i].style.display = '';
	}
	document.getElementById('showAll').className = 'button_on';
	document.getElementById('showCov').className = 'button_off';
	document.getElementById('showMis').className = 'button_off';

	document.cookie = "showhide=showAll";
}

function showCov()
{
	var x = document.getElementsByTagName('div');
	for (var i = 0; i < x.length; i++)
	{
		if (x[i].className == 'covered') x[i].style.display = 'block';
		if (x[i].className == 'missing') x[i].style.display = 'none';
	}
	var y = document.getElementsByTagName('tr');
	for (var i = 0; i < y.length; i++)
	{
		if (y[i].className == 'covered') y[i].style.display = '';
		if (y[i].className == 'missing') y[i].style.display = 'none';
		if (y[i].className == 'neutral') y[i].style.display = 'none';
	}
	document.getElementById('showAll').className = 'button_off';
	document.getElementById('showCov').className = 'button_on';
	document.getElementById('showMis').className = 'button_off';

	document.cookie = "showhide=showCov";
}

function showMis()
{
	var x = document.getElementsByTagName('div');
	for (var i = 0; i < x.length; i++)
	{
		if (x[i].className == 'missing') x[i].style.display = 'block';
		if (x[i].className == 'covered') x[i].style.display = 'none';
	}
	var y = document.getElementsByTagName('tr');
	for (var i = 0; i < y.length; i++)
	{
		if (y[i].className == 'missing') y[i].style.display = '';
		if (y[i].className == 'covered') y[i].style.display = 'none';
		if (y[i].className == 'neutral') y[i].style.display = 'none';
	}
	document.getElementById('showAll').className = 'button_off';
	document.getElementById('showCov').className = 'button_off';
	document.getElementById('showMis').className = 'button_on';

	document.cookie = "showhide=showMis";
}

function getCookie(key)
{
	var start = document.cookie.indexOf(key + "=");
	if (start < 0) return(null); /* no such cookie */

	var value = start + key.length + 1;
	return(document.cookie.substring(value, document.cookie.indexOf(";", value)));
}

function showLast()
{
	switch (getCookie("showhide")) {
		case "showCov": showCov(); break;
		case "showMis": showMis(); break;
		default:        showAll(); break;
	}
}
