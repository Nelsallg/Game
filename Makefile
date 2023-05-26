# --------------------------------#
# Makefile for the "make" command
# --------------------------------#

# ----- Colors -----
GREEN = /bin/echo -e "\x1b[32m\#\# $1\x1b[0m"
RED = /bin/echo -e "\x1b[31m\#\# $1\x1b[0m"

# ----- Programs -----
GCC = gcc

## ----- GCC -----
compile: ## Compile project
	@$(call GREEN, "Compilling file...")
	$(GCC) src/init.c src/main.c -o bin/$(FILENAME) -I include -L lib -lmingw32 -lSDL2main -lSDL2
exe: ## Create .exe file for current project
	@$(call GREEN, "Running file...")
	./bin/$(RUN)

## ----- Help ----- 
help: ## Display this help
	@$(call GREEN, "Available commands:")
	@grep -E '(^[a-zA-Z0-9_-]+:.*?##.*$$)|(^##)' $(MAKEFILE_LIST) | awk 'BEGIN {FS = ":.*?## "}{printf "\033[32m%-30s\033[0m %s\n", $$1, $$2}' | sed -e 's/\[32m##/[33m/'