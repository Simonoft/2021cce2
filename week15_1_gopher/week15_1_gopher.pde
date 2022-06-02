PImage img1,img2,img3,img4;
void setup(){
  size(640,480);
  img1=loadImage("groundhogIdle.png");
  img2=loadImage("groundhogDown.png");
  img3=loadImage("groundhogLeft.png");
  img4=loadImage("groundhogRight.png");
}

void draw(){
  image(img1,200,199);
  image(img2,0,0);
  image(img3,400,400);
  image(img4,600,600);
}
