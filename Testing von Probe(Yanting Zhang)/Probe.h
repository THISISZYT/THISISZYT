int count = 0;
int buttonState = 0;
int prebuttonState = 0;
buttonState = digitalRead(Button1);

bool counting(int a) {
	if (a = 0 || a > 100) {
		return false;
	}
	else if (a > 0 && a <= 100) {
		return true;//punkt richtig sammeln
	}
}
bool button1() {
	if (buttonState !=0) {
		return true;
	}
	else return false;//button working
}

bool LED() {
	if (digitalread(LED1) == HIGH) return true;
	else return false; //LED working
}