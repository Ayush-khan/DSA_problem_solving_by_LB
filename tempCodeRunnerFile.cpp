for (; i < nums.size(); i++)
        {
            if (nums[i] != 0)
            {
                break;
            }
        }
        nums.erase(nums.begin(), nums.begin() + i); // remove the stating zeros
        for (int j = 0; j < i; j++)
        {
            nums.push_back(0);
        }