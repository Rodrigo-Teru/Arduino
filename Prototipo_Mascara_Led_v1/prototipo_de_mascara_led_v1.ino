// C++ code
//
#include <Adafruit_NeoPixel.h>

#define PIN      6
#define N_LEDS 400

Adafruit_NeoPixel strip = Adafruit_NeoPixel(N_LEDS, PIN, NEO_GRB + NEO_KHZ800);

void setup() {
  pinMode(12,INPUT);
  pinMode(11,INPUT);
  pinMode(10,INPUT);
  pinMode(9,INPUT);
  pinMode(8,INPUT);
  strip.begin();
}

void loop() {
  if(digitalRead(13)==HIGH){
    strip.clear();
    strip.setPixelColor(344, strip.Color(0, 0, 255));
    strip.setPixelColor(345, strip.Color(0, 0, 255));
    strip.setPixelColor(346, strip.Color(0, 0, 255));
    strip.setPixelColor(336, strip.Color(0, 0, 255));
    strip.setPixelColor(335, strip.Color(0, 0, 255));
    strip.setPixelColor(333, strip.Color(0, 0, 255));
    strip.setPixelColor(332, strip.Color(0, 0, 255));
    strip.setPixelColor(303, strip.Color(0, 0, 255));
    strip.setPixelColor(307, strip.Color(0, 0, 255));
    strip.setPixelColor(296, strip.Color(0, 0, 255));
    strip.setPixelColor(292, strip.Color(0, 0, 255));
    strip.setPixelColor(263, strip.Color(0, 0, 255));
    strip.setPixelColor(267, strip.Color(0, 0, 255));
    strip.setPixelColor(256, strip.Color(0, 0, 255));
    strip.setPixelColor(255, strip.Color(0, 0, 255));
    strip.setPixelColor(253, strip.Color(0, 0, 255));
    strip.setPixelColor(252, strip.Color(0, 0, 255));
    strip.setPixelColor(224, strip.Color(0, 0, 255));
    strip.setPixelColor(225, strip.Color(0, 0, 255));
    strip.setPixelColor(226, strip.Color(0, 0, 255));
    
    strip.setPixelColor(355, strip.Color(0, 0, 255));
    strip.setPixelColor(354, strip.Color(0, 0, 255));
    strip.setPixelColor(353, strip.Color(0, 0, 255));
    strip.setPixelColor(323, strip.Color(0, 0, 255));
    strip.setPixelColor(324, strip.Color(0, 0, 255));
    strip.setPixelColor(326, strip.Color(0, 0, 255));
    strip.setPixelColor(327, strip.Color(0, 0, 255));
    strip.setPixelColor(316, strip.Color(0, 0, 255));
    strip.setPixelColor(312, strip.Color(0, 0, 255));
    strip.setPixelColor(283, strip.Color(0, 0, 255));
    strip.setPixelColor(287, strip.Color(0, 0, 255));
    strip.setPixelColor(276, strip.Color(0, 0, 255));
    strip.setPixelColor(272, strip.Color(0, 0, 255));
    strip.setPixelColor(243, strip.Color(0, 0, 255));
    strip.setPixelColor(244, strip.Color(0, 0, 255));
    strip.setPixelColor(246, strip.Color(0, 0, 255));
    strip.setPixelColor(247, strip.Color(0, 0, 255));
    strip.setPixelColor(235, strip.Color(0, 0, 255));
    strip.setPixelColor(234, strip.Color(0, 0, 255));
    strip.setPixelColor(233, strip.Color(0, 0, 255));
    
    strip.show();
  }
  if(digitalRead(12)==HIGH){
    strip.clear();
    strip.setPixelColor(336, strip.Color(255, 0, 0));
    strip.setPixelColor(332, strip.Color(255, 0, 0));
    strip.setPixelColor(304, strip.Color(255, 0, 0));
    strip.setPixelColor(306, strip.Color(255, 0, 0));
    strip.setPixelColor(294, strip.Color(255, 0, 0));
    strip.setPixelColor(264, strip.Color(255, 0, 0));
    strip.setPixelColor(266, strip.Color(255, 0, 0));
    strip.setPixelColor(256, strip.Color(255, 0, 0));
    strip.setPixelColor(252, strip.Color(255, 0, 0));
    
    strip.setPixelColor(323, strip.Color(255, 0, 0));
    strip.setPixelColor(327, strip.Color(255, 0, 0));
    strip.setPixelColor(315, strip.Color(255, 0, 0));
    strip.setPixelColor(313, strip.Color(255, 0, 0));
    strip.setPixelColor(285, strip.Color(255, 0, 0));
    strip.setPixelColor(275, strip.Color(255, 0, 0));
    strip.setPixelColor(273, strip.Color(255, 0, 0));
    strip.setPixelColor(243, strip.Color(255, 0, 0));
    strip.setPixelColor(247, strip.Color(255, 0, 0));
    
    strip.setPixelColor(182, strip.Color(255, 0, 0));
    strip.setPixelColor(197, strip.Color(255, 0, 0));
    strip.setPixelColor(177, strip.Color(255, 0, 0));
    strip.setPixelColor(176, strip.Color(255, 0, 0));
    strip.setPixelColor(175, strip.Color(255, 0, 0));
    strip.setPixelColor(174, strip.Color(255, 0, 0));
    strip.setPixelColor(162, strip.Color(255, 0, 0));
    strip.setPixelColor(163, strip.Color(255, 0, 0));
    strip.setPixelColor(164, strip.Color(255, 0, 0));
    strip.setPixelColor(165, strip.Color(255, 0, 0));
    strip.setPixelColor(143, strip.Color(255, 0, 0));
    strip.setPixelColor(146, strip.Color(255, 0, 0));
    strip.setPixelColor(147, strip.Color(255, 0, 0));
    strip.setPixelColor(148, strip.Color(255, 0, 0));
    strip.setPixelColor(151, strip.Color(255, 0, 0));
    strip.setPixelColor(152, strip.Color(255, 0, 0));
    strip.setPixelColor(153, strip.Color(255, 0, 0));
    strip.setPixelColor(156, strip.Color(255, 0, 0));
    strip.setPixelColor(135, strip.Color(255, 0, 0));
    strip.setPixelColor(130, strip.Color(255, 0, 0));
    strip.setPixelColor(129, strip.Color(255, 0, 0));
    strip.setPixelColor(124, strip.Color(255, 0, 0));
    strip.setPixelColor(104, strip.Color(255, 0, 0));
    strip.setPixelColor(115, strip.Color(255, 0, 0));
    strip.setPixelColor(94, strip.Color(255, 0, 0));
    strip.setPixelColor(85, strip.Color(255, 0, 0));
    strip.setPixelColor(66, strip.Color(255, 0, 0));
    strip.setPixelColor(67, strip.Color(255, 0, 0));
    strip.setPixelColor(72, strip.Color(255, 0, 0));
    strip.setPixelColor(73, strip.Color(255, 0, 0));
    strip.setPixelColor(51, strip.Color(255, 0, 0));
    strip.setPixelColor(50, strip.Color(255, 0, 0));
    strip.setPixelColor(49, strip.Color(255, 0, 0));
    strip.setPixelColor(48, strip.Color(255, 0, 0));
    strip.show();
  }
  if(digitalRead(11)==HIGH){
    strip.clear();
    strip.setPixelColor(344, strip.Color(255, 255, 0));
    strip.setPixelColor(345, strip.Color(255, 255, 0));
    strip.setPixelColor(346, strip.Color(255, 255, 0));
    strip.setPixelColor(336, strip.Color(255, 255, 0));
    strip.setPixelColor(335, strip.Color(255, 255, 0));
    strip.setPixelColor(333, strip.Color(255, 255, 0));
    strip.setPixelColor(332, strip.Color(255, 255, 0));
    strip.setPixelColor(303, strip.Color(255, 255, 0));
    strip.setPixelColor(307, strip.Color(255, 255, 0));
    
    strip.setPixelColor(355, strip.Color(255, 255, 0));
    strip.setPixelColor(354, strip.Color(255, 255, 0));
    strip.setPixelColor(353, strip.Color(255, 255, 0));
    strip.setPixelColor(323, strip.Color(255, 255, 0));
    strip.setPixelColor(324, strip.Color(255, 255, 0));
    strip.setPixelColor(326, strip.Color(255, 255, 0));
    strip.setPixelColor(327, strip.Color(255, 255, 0));
    strip.setPixelColor(316, strip.Color(255, 255, 0));
    strip.setPixelColor(312, strip.Color(255, 255, 0));
    strip.show();
  }
  if(digitalRead(9)==HIGH){
    strip.clear();
    strip.setPixelColor(263, strip.Color(0, 0, 255));
    strip.setPixelColor(267, strip.Color(0, 0, 255));
    strip.setPixelColor(256, strip.Color(0, 0, 255));
    strip.setPixelColor(255, strip.Color(0, 0, 255));
    strip.setPixelColor(253, strip.Color(0, 0, 255));
    strip.setPixelColor(252, strip.Color(0, 0, 255));
    strip.setPixelColor(224, strip.Color(0, 0, 255));
    strip.setPixelColor(225, strip.Color(0, 0, 255));
    strip.setPixelColor(226, strip.Color(0, 0, 255));
    
    strip.setPixelColor(276, strip.Color(0, 0, 255));
    strip.setPixelColor(272, strip.Color(0, 0, 255));
    strip.setPixelColor(243, strip.Color(0, 0, 255));
    strip.setPixelColor(244, strip.Color(0, 0, 255));
    strip.setPixelColor(246, strip.Color(0, 0, 255));
    strip.setPixelColor(247, strip.Color(0, 0, 255));
    strip.setPixelColor(235, strip.Color(0, 0, 255));
    strip.setPixelColor(234, strip.Color(0, 0, 255));
    strip.setPixelColor(233, strip.Color(0, 0, 255));
    strip.show();
  }
  if(digitalRead(8)==HIGH){
    strip.clear();
    strip.setPixelColor(345, strip.Color(255, 0, 0));
    strip.setPixelColor(346, strip.Color(255, 0, 0));
    strip.setPixelColor(347, strip.Color(255, 0, 0));
    strip.setPixelColor(352, strip.Color(255, 0, 0));
    strip.setPixelColor(353, strip.Color(255, 0, 0));
    strip.setPixelColor(354, strip.Color(255, 0, 0));
    strip.setPixelColor(335, strip.Color(255, 0, 0));
    strip.setPixelColor(331, strip.Color(255, 0, 0));
    strip.setPixelColor(328, strip.Color(255, 0, 0));
    strip.setPixelColor(324, strip.Color(255, 0, 0));
    strip.setPixelColor(303, strip.Color(255, 0, 0));
    strip.setPixelColor(309, strip.Color(255, 0, 0));
    strip.setPixelColor(310, strip.Color(255, 0, 0));
    strip.setPixelColor(316, strip.Color(255, 0, 0));
    strip.setPixelColor(297, strip.Color(255, 0, 0));
    strip.setPixelColor(282, strip.Color(255, 0, 0));
    strip.setPixelColor(262, strip.Color(255, 0, 0));
    strip.setPixelColor(277, strip.Color(255, 0, 0));
    strip.setPixelColor(257, strip.Color(255, 0, 0));
    strip.setPixelColor(242, strip.Color(255, 0, 0));
    strip.setPixelColor(222, strip.Color(255, 0, 0));
    strip.setPixelColor(237, strip.Color(255, 0, 0));
    strip.setPixelColor(216, strip.Color(255, 0, 0));
    strip.setPixelColor(203, strip.Color(255, 0, 0));
    strip.setPixelColor(183, strip.Color(255, 0, 0));
    strip.setPixelColor(196, strip.Color(255, 0, 0));
    strip.setPixelColor(175, strip.Color(255, 0, 0));
    strip.setPixelColor(164, strip.Color(255, 0, 0));
    strip.setPixelColor(145, strip.Color(255, 0, 0));
    strip.setPixelColor(154, strip.Color(255, 0, 0));
    strip.setPixelColor(133, strip.Color(255, 0, 0));
    strip.setPixelColor(126, strip.Color(255, 0, 0));
    strip.setPixelColor(107, strip.Color(255, 0, 0));
    strip.setPixelColor(112, strip.Color(255, 0, 0));
    strip.setPixelColor(91, strip.Color(255, 0, 0));
    strip.setPixelColor(88, strip.Color(255, 0, 0));
    strip.setPixelColor(69, strip.Color(255, 0, 0));
    strip.setPixelColor(70, strip.Color(255, 0, 0));
    strip.show();
  }
}