import processing.sound.*;
int a;
PImage img;
SoundFile sound; //小心大小寫
void setup(){
  size(200,200);           //檔案要偷來用,「檔案要拉進來」
  sound = new SoundFile(this, "vibraphon.aiff");
  sound.loop();
}
void draw(){
  
}
