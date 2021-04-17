#!/bin/bash
ifconfig | grep 'ether' | cut -c15-31