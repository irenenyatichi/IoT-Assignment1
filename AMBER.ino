void AMBER(){
  int k=0;
  while (k<=4){
    digitalWrite(red, HIGH);
    delay(400);
    digitalWrite(red, LOW);
    delay(400);
    k++;
  }
}
