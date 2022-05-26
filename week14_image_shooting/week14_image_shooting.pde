PImage img,bullet; 
void setup(){
  size(300,600);
  img=loadImage("img.png");
  bullet=loadImage("bullet.png");
}
int dy=0;
void draw(){
  background(255);
  imageMode(CENTER);
  image(img,mouseX,mouseY);
  if(mousePressed){
    image(bullet,mouseX,mouseY-dy);
    dy++;
  }
  
}
