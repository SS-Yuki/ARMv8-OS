#pragma once

#include <common/list.h>
struct proc; // dont include proc.h here

// embedded data for cpus
struct sched
{
    // TODO: customize your sched info
    struct proc* thisproc;
    struct proc* idle;

};

// embeded data for procs
struct schinfo
{
    // TODO: customize your sched info
    ListNode rq_node;
    bool iscontainer;
    u64 start_;
    u64 occupy_;
};

// embedded data for containers
struct schqueue
{
    // TODO: customize your sched queue
    ListNode rq;
};
