//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "MUElement.h"

@class UILabel;

@interface MUE7Element : MUElement
{
    UILabel *_numLabel;
}

@property(retain, nonatomic) UILabel *numLabel; // @synthesize numLabel=_numLabel;
- (void).cxx_destruct;
- (void)refreshNum;
- (void)observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(void *)arg4;
- (void)setModel:(id)arg1;
- (void)dealloc;

@end

