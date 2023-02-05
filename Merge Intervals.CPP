

vector<vector<int>> mergeIntervals(vector<vector<int>> &intervals)

{

    // Write your code here.

    sort(intervals.begin(),intervals.end());

    stack<int> st;

    vector<vector<int>> ans;

    int end;

    for(int i=0;i<intervals.size();i++){

        if(st.empty()){

            end = intervals[i][1];

            st.push(intervals[i][0]);

            st.push(intervals[i][1]);

        }

        if(end>=intervals[i][0]){

            end = max(end,intervals[i][1]);

            st.pop();

            st.push(end);

        }else{

            vector<int> v(2,0);

            v[1] = st.top();st.pop();

            v[0] = st.top();st.pop();

            ans.push_back(v);

            end = end = intervals[i][1];

            st.push(intervals[i][0]);

            st.push(intervals[i][1]);

        }

    }

    if(!st.empty()){

        vector<int> v(2,0);

        v[1] = st.top();st.pop();

        v[0] = st.top();st.pop();

        ans.push_back(v);

    }

    /*

    for(int i=0;i<intervals.size()-1;i++){

        if(intervals[i][0]==-1){

            continue;

        }

        int end = intervals[i][1];

        for(int j=i+1;j<intervals.size();j++){

            if(end>=intervals[j][0]){

                end = max(end,intervals[j][1]);

                intervals[i][1] = end;

                intervals[j][0] = -1;

                intervals[j][1] = -1;

            }

        }

    }

    

    vector<vector<int>> ans;

    for(vector<int> v:intervals){

        if(v[0]==-1){

            continue;

        }

        ans.push_back(v);

    }

    */

    return ans;
}

