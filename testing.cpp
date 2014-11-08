#include "opencv2/highgui/highgui.hpp"
#include "opencv2/imgproc/imgproc.hpp"
#include <iostream>
#include <stdio.h>
#include <stdlib.h>

using namespace cv;
using namespace std;

int thresh = 200;
int max_thresh = 255;

bool self(unsigned short count,unsigned short a[],unsigned short b[],unsigned short threshold){
	unsigned short n=count;
	while(count!=0){
		count--;
		if(d(a[n],b[n],a[count],b[count])<threshold) return false;
	}
	return true;
}

unsigned short d(unsigned short i, unsigned short j, unsigned short ti, unsigned short tj){
	return pow(pow(abs(ti-i),2)+pow(abs(tj-j),2),0.5);
}

int main()
{
	Mat src, src_gray,dst, dst_norm, dst_norm_scaled;
  	int blockSize = 2, apertureSize = 3;
  	double k = 0.04;
	//VideoCapture cap(0);
	//for(int i=1;i<=20;++i){cap>>src;}
	//cap>>src;
	src = imread("chess.jpg");
	blur(src,src,Size(3,3));
	cvtColor(src,src_gray,CV_BGR2GRAY);
	namedWindow("Source Image",CV_WINDOW_AUTOSIZE);
	namedWindow("Operated Image",CV_WINDOW_AUTOSIZE);
	imshow("Source Image",src);
  	dst = Mat::zeros( src.size(), CV_32FC1 );
  	cornerHarris( src_gray, dst, blockSize, apertureSize, k, BORDER_DEFAULT );
  	
  	normalize( dst, dst_norm, 0, 255, NORM_MINMAX, CV_32FC1, Mat() );
    convertScaleAbs( dst_norm, dst_norm_scaled );
    
    unsigned short ai[300],bj[300], count=0;

    for( int j = 0; j < dst_norm.rows ; j++ )
     { for( int i = 0; i < dst_norm.cols; i++ )
          {
            if( (int) dst_norm.at<float>(j,i) > thresh )
              {
					circle( dst_norm_scaled, Point( i, j ), 5,  Scalar(0), 2, 8, 0 );
				    bj[count]=j;
				    ai[count]=i;
				    count++;
              	}
          }
     }
     
     while(count!=0){
		 if(self(count,bj,ai,50))
			cout<<"("<<j<<","<<i<<")\n";
		 count--;
	}
  
  imshow("Operated Image", dst_norm_scaled );
  waitKey(0);

}
