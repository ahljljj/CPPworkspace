.PHONY: clean All

All:
	@echo "----------Building project:[ declaringclass - Debug ]----------"
	@cd "declaringclass" && "$(MAKE)" -f  "declaringclass.mk"
clean:
	@echo "----------Cleaning project:[ declaringclass - Debug ]----------"
	@cd "declaringclass" && "$(MAKE)" -f  "declaringclass.mk" clean
