#include "discbot.hpp"
using namespace eosio;

ACTION discbot::pair( std::string token ) {
   print( "Passing input through the contract: ", token.c_str() );
}

EOSIO_DISPATCH( discbot, (pair) )
