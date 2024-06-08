// LR (Linear Regression)
// By SuXYIO
// Created on 2024.05.18

#pragma once
#ifndef HEAD_H
#define HEAD_H
//defines
	//Version stuff
		#define VER "1.0.0"
	//Max number of threads to run
		#define MAX_THREADS 1024
	//Buffer size for strings
		#define STR_BUFSIZE 128
	//Float Precision for Print: how many digits to print after float decimal point
		#define FPP 4
	//ANSI color
		#define COLOR_SUCC "\033[32m"
		#define COLOR_WARN "\033[33m"
		#define COLOR_ERROR "\033[31m"
		#define COLOR_END "\033[0m"
//functions
	//neuron.c
		double f(double x);
		double g(double x);
		double MSE(double e, double a);
		double MSE_grad_w(double e, double a, double x);
		double MSE_grad_b(double e, double a, double x);
		double None(double x);
		double ReLU(double x);
		double ReLU_grad(double x);
		double LReLU(double x);
		double LReLU_grad(double x);
		double Sigmoid(double x);
		double Tanh(double x);
		double MSE_grad_w_ReLU(double e, double a, double x);
		double MSE_grad_b_ReLU(double e, double a, double x);
		double MSE_grad_w_LReLU(double e, double a, double x);
		double MSE_grad_b_LReLU(double e, double a, double x);
		double MSE_grad_w_Sigmoid(double e, double a, double x);
		double MSE_grad_b_Sigmoid(double e, double a, double x);
		double MSE_grad_w_Tanh(double e, double a, double x);
		double MSE_grad_b_Tanh(double e, double a, double x);
		int strand(void);
		double rand_nml(double mean, double stddev);
	//func.c
		void* calc_batch(void* args);
		int isusablefile(char* filename);
		int printversion(void);
		int manualpage(void);
#endif
