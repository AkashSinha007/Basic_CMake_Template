install:
	sudo apt-get install gcovr lcov 

install_doc:
	sudo apt-get install doxygen

install_json_submodule:
	git submodule add https://github.com/nlohmann/json.git external/json

prepare:
	rm -rf build
	mkdir build
