int a = 0;

int b = 0;

int c = 0;

int d = 0;

int e = 0;

void values(){
char buffer[40];
sprintf(buffer, "values: %d,%d,%d,%d,%d", a, b, c,d,e);
Serial.println(buffer);
 }

void setup()
{
  pinMode(A0, INPUT);
  pinMode(A1, INPUT);
  pinMode(A2, INPUT);
  pinMode(A3, INPUT);
  pinMode(A4, INPUT);
  Serial.begin(9600);

}

void loop()
{
  a = analogRead(A0); //thumb
  b = analogRead(A1); //index
  c = analogRead(A2); //middle
  d = analogRead(A3); //ring
  e = analogRead(A4); //little

//Serial.println(a);
//Serial.println(b);
//Serial.println(c);
//Serial.println(d);
//Serial.println(e);
Serial.println(" ");

 {
  if (a<100 && b<80  && c<40 && d<35 && e<100) {
    Serial.println("Please stop");
    
  }
  {
  if (a<100 && b>70  && d>25 && e<100 ) {
    Serial.println("Hey,How are you?");
  }
  
  if (a<30 && a>10 && b>180 && b<230 && c>85 && c<180 && d>25 && d<90 && e>30 && e<100 ) {
    Serial.println("Can you comunicate in sign language?");
  }
  }
  if (a<30 && a>12 && b>190 && b<240 && c>115 && c<165 && d>65 && d<115 && e>60 && e<110 ) {
    Serial.println("Thank You");

  }
   if (a<180 && a>100 && b>60 && b<140 && c>10 && c<90 && d>30 && d<110 && e>100 && e<130 ) {
    Serial.println("e");

  }
    if (a<180 && a>100 && b>200 && b<250 && c>90 && c<120 && d>90 && d<160 && e>130 && e<210 ) {
    Serial.println("f");

  }
       if (a<250 && a>200 && b>225 && b<275 && c>70 && c<120 && d>40 && d<90 && e>75 && e<120 ) {
    Serial.println("g");

  }
  if (a<260 && a>210 && b>125 && b<175 && c>70 && c<1200 && d>135 && d<185 && e>100 && e<150 ) {
    Serial.println("h");

  }
  if (a<300 && a>250 && b>100 && b<150 && c>90 && c<140 && d>55 && d<105 && e>155 && e<205 ) {
    Serial.println("i");

  }
  if (a<260 && a>210 && b>225 && b<275 && c>65 && c<115 && d>125 && d<175 && e>95 && e<145 ) {
    Serial.println("k");
  }
  if (a < 800 && b < 900 && c > 900 && d > 900 && e > 900 ) {
    Serial.println("l");
  }
  if (a < 800 && b > 900 && c > 900 && d > 900 && e < 900 ) {
    Serial.println("m");
  }
  if (a < 820 && b > 900 && c > 900 && d < 900 && e < 900 ) {
    Serial.println("n");
  }
   if (a > 820 && b < 900 && c < 900 && d < 900 && e > 900 ) {
    Serial.println("o");
  }
   if (a < 880 && b < 910 && c > 900 && d > 900 && e < 890 ) {
    Serial.println("p");
  }
   if (a < 850 && b < 900 && c > 900 && d < 920 && e < 890 ) {
    Serial.println("q");
  }
   if (a < 790 && b < 900 && c < 900 && d > 920 && e > 890 ) {
    Serial.println("r");
  }
  if (a < 960 && b > 900 && c > 900 && d > 920 && e > 890 && a > 940 ) {
    Serial.println("s");
  }
  if (a < 800 && b > 900 && d < 920 && e < 890 ) {
    Serial.println("t");
  }
   if (a > 900 && b < 900 && d > 900 && e < 900 ) {
    Serial.println("u");
  }
  if (a > 900 && b < 900 && d < 900 && e < 900 && c > 900 ) {
    Serial.println("v");
  }
  if (a < 900 && b < 900 && d < 900 && e < 900 && c > 900 ) {
    Serial.println("w");
  }
   if (a > 900 && b > 900 && d < 900 && e < 900 && c > 900 ) {
    Serial.println("x");
  }
   if (a > 800 && b > 900 && d < 900 && e > 900 && c > 900 ) {
    Serial.println("y");
  }
     if (a > 900 && b > 900 && d < 900 && e < 900 && c > 900 ) {
    Serial.println("z");
  }

values();
  delay(3000); 
  }}