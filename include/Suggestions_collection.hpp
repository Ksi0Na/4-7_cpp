// Copyright 2021 Ksi0Na OlgaMolchun5@gmail.com

#ifndef INCLUDE_SUGGESTIONS_COLLECTION_HPP_
#define INCLUDE_SUGGESTIONS_COLLECTION_HPP_
#include <nlohmann/json.hpp>
#include <string>

using json = nlohmann::json;

class Suggestions_collection {
 public:
  Suggestions_collection();
  void Update(json storage);
  json Suggest(const std::string& input);

 private:
  json suggestions_;
};

#endif  // INCLUDE_SUGGESTIONS_COLLECTION_HPP_
