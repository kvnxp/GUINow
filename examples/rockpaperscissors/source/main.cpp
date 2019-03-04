#include <3ds.h>
#include <GUINow.h>
#include <stdio.h>
#include <stdlib.h> //rand
/*
 * 
 */

typedef enum Choice {
    ROCK, PAPER, SCISSORS
}Choice;

GP::Button win;

bool wins(Choice player1, Choice player2) {
    
    if((int)player1 < (int)player2 && (int)player1 != 0) {
        return false;
    }
    else {
        return true;
    }
}
void game(Choice player1) {
    Choice player2 = static_cast<Choice>((int)rand() * 3);
    
    if(wins(player1, player2)) {
        win.setText((char*)"Player1 wins!");
    }
    else {
        win.setText((char*)"Player1 loses!");
    }
}


int main(int argc, char** argv) {
    
    //initialise graphics
    GP::Graphics::init();
    
    //set our desired fps
    GP::Gui::setFPS(30);
    
    //initialise our screens
    GP::TopScreen splash = GP::TopScreen();
    
    GP::TopScreen splashRock = GP::TopScreen();
    GP::TopScreen splashPaper = GP::TopScreen();
    GP::TopScreen splashScissors = GP::TopScreen();
    
    GP::TopScreen top = GP::TopScreen();
    GP::BottomScreen bottom = GP::BottomScreen();
    
    //add stuff to display on the screens
    GP::Rectangle square = GP::Rectangle();
    square.dimensions.set(splashRock.dimensions.x / 2 - 20, splashRock.dimensions.y / 2 - 20, 40, 40);
    splashRock.fill(&square);
    
    GP::Elipse elipse = GP::Elipse();
    elipse.dimensions.set(splashPaper.dimensions.x / 2 - 30, splashPaper.dimensions.y / 2 - 30, 60, 60);
    splashPaper.fill(&elipse);
            
    GP::Rectangle rect = GP::Rectangle();
    rect.dimensions.set(splashScissors.dimensions.x / 2 - 30, splashScissors.dimensions.y / 2 - 20, 60, 40);
    splashScissors.fill(&rect);
    
    //add a win/lose button
    win = GP::Button((char*)"Tie");
    win.dimensions.set(splashScissors.dimensions.x / 2, 5, 100, 25);
    splashRock.fill(&win);
    splashPaper.fill(&win);
    splashScissors.fill(&win);
    
    //bottom screen
    GP::Button btnSquare = GP::Button((char*)"A: Rock");
    btnSquare.dimensions.set(bottom.dimensions.x / 2 - 40, 10, 80, 30);
    bottom.fill(&btnSquare);
    
    GP::Button btnCircle = GP::Button((char*)"B: Paper");
    btnCircle.dimensions.set(bottom.dimensions.x / 2 - 40, 45, 80, 30);
    bottom.fill(&btnCircle);
    
    GP::Button btnRect = GP::Button((char*)"X: Scissors");
    btnRect.dimensions.set(bottom.dimensions.x / 2 - 50, 80, 100, 30);
    bottom.fill(&btnRect);
    
    GP::Graphics::setScreen(&splash);
    int splashLength = 3 * 30; //seconds * fps
    while(GP::Gui::loop(/*splashLength*/) && aptMainLoop()) {
        GP::Graphics::draw();
        GP::Font::drawString(splash.buffer, GP::Rectangle2D(1, 1, splash.dimensions.x - 1, splash.dimensions.y - 1), "Rock Paper Scissors", GP::Color(0xFF, 0x00, 0x00));
        splashLength--;

        if(splashLength <= 0) {
            break;
        }
    }
    
    
    GP::Console console = GP::Console();

    console.addText("Example console text");
    top.fill(&console);
    
    GP::Graphics::setScreen(&top);
    GP::Graphics::setScreen(&bottom);
    while(GP::Gui::loop() && aptMainLoop()) {
        //draw the screens
        GP::Graphics::draw();

        if(GP::Keys::a == GP::KeyState::DOWN) {
            GP::Graphics::setScreen(&splashRock);
            game(Choice::ROCK);
        }
        if(GP::Keys::b == GP::KeyState::DOWN) {
            GP::Graphics::setScreen(&splashPaper);
            game(Choice::PAPER);
        }
        if(GP::Keys::x == GP::KeyState::DOWN) {
            GP::Graphics::setScreen(&splashScissors);
            game(Choice::SCISSORS);
        }
        
        if(GP::Keys::start == GP::KeyState::DOWN) {
            GP::Gui::stop();
            break;
        }
    }
    
    GP::Graphics::dinit();
    
    return 0;
}
