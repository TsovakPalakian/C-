
void main() {//относится к классу String
	String operator= (const String&);
	String& Strin::operator= (const String& ob){
		if(this != &ob) {
			delete[]str;// для того чтобы избежать утечки памяти
			len = ob.len;
			str = new char[len + ];
			if(!str) exit();
			srtcpy(str, ob.str);
		}
		return *this//вернули оъект уже измененный, со всеми операциями перед ним.
	}
}