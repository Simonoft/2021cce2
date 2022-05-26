PImage img;
void setup(){
  size(300,300);
  img=loadImage("image.jpg");
}
void draw(){
  image(img,mouseX,mouseY);
}
