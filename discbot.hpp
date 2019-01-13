#include <eosiolib/eosio.hpp>

using namespace eosio;

CONTRACT discbot : public eosio::contract {
  public:
      using contract::contract;

      ACTION pair( std::string token );
};
