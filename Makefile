.PHONY: clean All

All:
	@echo "----------Building project:[ LeetCode - Debug ]----------"
	@cd "C:\Users\Jinjin\Documents\GitHub\LeetCode\C++\LeetCode" && "$(MAKE)" -f  "LeetCode.mk"
clean:
	@echo "----------Cleaning project:[ LeetCode - Debug ]----------"
	@cd "C:\Users\Jinjin\Documents\GitHub\LeetCode\C++\LeetCode" && "$(MAKE)" -f  "LeetCode.mk" clean
