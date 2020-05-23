#include "ludo_goti.hpp"

#include<iostream>
#include "ludo_coords.hpp"

const std::pair<int,int> ludo_goti::getCoords() const{
    if(curr_coords.first == 0 && curr_coords.second == 0){
        std::cerr<<"Coordinates of Goti are corrupt (0,0)\n"<<std::endl;
    }
    return curr_coords;
}

direction ludo_goti::get_curr_direction() const{
    return curr_direction;
}

colours ludo_goti::get_gotiColour(void) const{
    return gotiColour;
}

bool ludo_goti::operator==(const ludo_goti& goti){
    return (this->curr_coords == goti.curr_coords) && (this->gotiColour == goti.gotiColour);
}

ludo_goti::ludo_goti(colours gotiColour,const std::pair<int,int>& coords, direction dir) : curr_coords(coords) {
    this->gotiColour = gotiColour;
    this->curr_direction = NO_TURN;
    this->curr_direction = dir;
}