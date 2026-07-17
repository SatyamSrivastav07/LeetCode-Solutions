
class Solution {
public:
    vector<string> findAllRecipes(vector<string>& recipes, vector<vector<string>>& ingredients, vector<string>& supplies) {
        vector<string> ans;
        set<string> available(supplies.begin(), supplies.end());
        bool updated = true; // Flag to check if we can still make new recipes

        while (updated) { // Continue until no new recipes can be added
            updated = false;
            for (int i = 0; i < recipes.size(); i++) {
                if (available.count(recipes[i])) {
                    continue; // Skip if the recipe is already available
                }

                bool canMake = true;
                for (const string& ing : ingredients[i]) {
                    if (available.find(ing) == available.end()) { // Missing ingredient
                        canMake = false;
                        break;
                    }
                }

                if (canMake) { // Add new valid recipe
                    available.insert(recipes[i]);
                    ans.push_back(recipes[i]);
                    updated = true; // A new recipe was added, so we need another iteration
                }
            }
        }

        return ans;
    }
};
