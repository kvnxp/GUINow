#include <3ds.h>
#include <GUINow.h>
#include <stdio.h>
#include <time.h>
#include <cstring>
/*
 * 
 */

//for future use
GP::TopScreen splash;
GP::TopScreen top;
GP::BottomScreen bottom;

GP::Console console;

void init() {
    //initialise our screens
    top = GP::TopScreen();
    bottom = GP::BottomScreen();
    splash = GP::TopScreen();
    
    console = GP::Console::console;
    top.fill(&console);
}

void displaySplash() {
    GP::Graphics::setScreen(&splash);
    int splashLength = 3 * 30; //seconds * fps
    while(GP::Gui::loop(splashLength) && aptMainLoop()) {
        GP::Graphics::draw();
        GP::Font::drawString(splash.buffer, GP::Rectangle2D(1, 1, splash.dimensions.x - 1, splash.dimensions.y - 1), "Slider sample", GP::Color(0xFF, 0x00, 0x00));
    }
}

void displayMain() {

    GP::Rectangle color = GP::Rectangle();
    color.dimensions = GP::Rectangle2D(200 - 25, 120 - 25, 50, 50);

    top.fill(&color);

    GP::Slider slider_r = GP::Slider();
    slider_r.setWidth(255);
    slider_r.dimensions.x = (320 - 255) / 2;
    slider_r.dimensions.y = 30;

    GP::Slider slider_g = GP::Slider();
    slider_g.setWidth(255);
    slider_g.dimensions.x = (320 - 255) / 2;
    slider_g.dimensions.y = 60;

    GP::Slider slider_b = GP::Slider();
    slider_b.setWidth(255);
    slider_b.dimensions.x = (320 - 255) / 2;
    slider_b.dimensions.y = 90;

    bottom.fill(&slider_r);
    bottom.fill(&slider_g);
    bottom.fill(&slider_b);

    GP::Graphics::setScreen(&top);
    GP::Graphics::setScreen(&bottom);

    int frame = 0;
    while(GP::Gui::loop() && aptMainLoop()) {
        //draw the screens
        GP::Graphics::draw();

        /*slider_r.setValue(frame / 3);
        slider_g.setValue(frame / 3);
        slider_b.setValue(frame / 3);
        frame++;*/

        color.backgroundColor = GP::Color((u8)slider_r.getValue(), (u8)slider_g.getValue(), (u8)slider_b.getValue());

        if(GP::Keys::start == GP::KeyState::DOWN) {
            GP::Gui::stop();
            break;
        }
    }
}

int main(int argc, char** argv) {
    
    //set our desired fps
    GP::Gui::setFPS(60);
    
    //initialise graphics
    GP::Graphics::init();
    
    init();
    //initialise our screens & objects
    console.addText((char*)"Init...");
    //display splash screen
    console.addText((char*)"Display splash...");
    displaySplash();
    //display our main views
    console.addText((char*)"Display main...");
    displayMain();

    //deïnitialize graphics
    GP::Graphics::dinit();
    
    return 0;
}