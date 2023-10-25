/*
Question 2: Merge Intervals
Given a collection of intervals, write a C++ function to merge any overlapping intervals.
*/

#include <iostream>
#include <vector>
#include <algorithm>

struct Interval {
    int start;
    int end;
};

std::vector<Interval> mergeIntervals(std::vector<Interval>& intervals) {
    if (intervals.empty()) return {};

    std::sort(intervals.begin(), intervals.end(), [](const Interval& a, const Interval& b) {
        return a.start < b.start;
    });

    std::vector<Interval> result;
    Interval current = intervals[0];

    for (int i = 1; i < intervals.size(); i++) {
        if (intervals[i].start <= current.end) {
            current.end = std::max(current.end, intervals[i].end);
        } else {
            result.push_back(current);
            current = intervals[i];
        }
    }

    result.push_back(current);
    return result;
}
