void setup(){
  size(300,300);
  fill(#97CAFA);
  textSize(50);
  textAlign(CENTER,CENTER);
}
int choice =-1;
void draw(){
  background(#00000000);
  text("Dinner 1",150,50);
  text("Dinner 2",150,150);
  text("Dinner 3",150,250); 
  if(choice==0) ellipse(0,25,50,50);
  if(choice==1) ellipse(0,125,50,50);
  if(choice==2) ellipse(0,225,50,50);
}
void mousePressed(){
  choice = int(random(3));//random choose one of zero to two.
}
