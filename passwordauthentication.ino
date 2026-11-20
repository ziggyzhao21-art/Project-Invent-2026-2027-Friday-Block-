void setup() {
  // put your setup code here, to run once:
  char  name[number of values]
  Int len= strlen(name)
  Name[len + 1] = “value you want to add”

  //Making buttons

  Elegoo_GFX_Btoon buttons[6]’
  char button_labels[3][2] = {“1”,”2”,”3”,”4”,”5”,”6”};

  For i in button_labels:
	  btn.initButton( idk(gfx),  idk(x),  idk(y),  idk(width),  idk(height),  TFT_WHITE(outline),  TFT_PINK(fil)l,  TFTA_WHITE(textcolor), i(label), idk(textsize));
	  btn.rawButton();

  //Making password 
  char password[6]  = “12345”;
  char input_password [6] - “”;
  bool password_correct = false;

  //Seeing if touchscreen was touched
  if(touchscreen.trqTouched()&&touchscreen.touched()){
	//#getting touchscreenpoints
	  TS_Point p = touchscreen.getPoint();
	  For i in button_labels:{
  //Getting character for button that was pressed 
	  if btn[i].contains(p.x,p.y){
		  Int len= strlen(input_password)
      input_password[len + 1] = btn[i].getLabel();

		}
	}
}

  //Checking if you have the right button
  if password == input_password:{
	bool password_correct = true;
}

  if password_correct = true:{
	//Go to the other screen
}


}

void loop() {
  // put your main code here, to run repeatedly:

}
