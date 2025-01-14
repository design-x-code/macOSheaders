//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 25 2017 03:49:04).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#pragma mark Function Pointers

typedef void (*CDUnknownFunctionPointerType)(void); // return type and parameters are unknown

#pragma mark Named Structures

struct CGPoint {
    double x;
    double y;
};

struct CGRect {
    struct CGPoint origin;
    struct CGSize size;
};

struct CGSize {
    double width;
    double height;
};

struct _CPIndex {
    long long _field1;
    long long _field2;
};

struct _EQDepth {
    unsigned long long fraction;
    unsigned long long exponent;
    unsigned long long limit;
};

struct _GImplicitPoint3D {
    struct _GPoint3D _field1;
    double _field2;
};

struct _GImplicitSegment2D {
    struct _GPoint2D _field1;
    struct _GPoint2D _field2;
    double _field3;
    double _field4;
    char _field5;
    struct _GPoint2D _field6;
};

struct _GPoint2D {
    double _field1;
    double _field2;
};

struct _GPoint3D {
    double x;
    double y;
    double z;
};

struct _GRange {
    double min;
    double max;
};

struct _GRect3D {
    struct _GPoint3D _field1;
    struct _GPoint3D _field2;
};

struct _NComplex {
    union {
        struct {
            double real;
            double imag;
        } ;
        _Complex double c;
    } ;
};

struct _NSRange {
    unsigned long long location;
    unsigned long long length;
};

