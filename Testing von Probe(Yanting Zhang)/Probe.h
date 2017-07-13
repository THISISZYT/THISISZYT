

bool counting(int a) {
	if (a = 0 || a > 100) {
		return false;
	}
	else if (a > 0 && a <= 100) {
		return true;//punkt richtig sammeln
	}
}
bool button1() {
	if (digitalRead(Button1) !=0) {
		return true;
	}
	else return false;//button working
}

bool LED() {
	if (digitalread(LED1) == HIGH) return true;//LED working
	else return false; 
}