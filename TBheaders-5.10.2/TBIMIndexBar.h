//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIControl.h>

@class NSDictionary, NSMutableArray, NSString, UITouch;
@protocol TBIMIndexBarDelegate;

@interface TBIMIndexBar : UIControl
{
    id <TBIMIndexBarDelegate> _delegate;	// 8 = 0x8
    unsigned long long _numberOfIndexes;	// 16 = 0x10
    NSMutableArray *_indexStrings;	// 24 = 0x18
    double _textSpacing;	// 32 = 0x20
    double _lineHeight;	// 40 = 0x28
    double _fontSize;	// 48 = 0x30
    NSDictionary *_textAttributes;	// 56 = 0x38
    NSString *_truncatedRowText;	// 64 = 0x40
    UITouch *_currentTouch;	// 72 = 0x48
    unsigned long long _lastSelectedStringIndex;	// 80 = 0x50
    double _desiredHeight;	// 88 = 0x58
    unsigned long long _numberOfDisplayableRows;	// 96 = 0x60
    NSMutableArray *_displayedIndexStrings;	// 104 = 0x68
    struct UIOffset _textOffset;	// 112 = 0x70
    struct CGRect _rectForTextArea;	// 128 = 0x80
}

@property(nonatomic) struct CGRect rectForTextArea; // @synthesize rectForTextArea=_rectForTextArea;
@property(retain, nonatomic) NSMutableArray *displayedIndexStrings; // @synthesize displayedIndexStrings=_displayedIndexStrings;
@property(nonatomic) unsigned long long numberOfDisplayableRows; // @synthesize numberOfDisplayableRows=_numberOfDisplayableRows;
@property(nonatomic) struct UIOffset textOffset; // @synthesize textOffset=_textOffset;
@property(nonatomic) double desiredHeight; // @synthesize desiredHeight=_desiredHeight;
@property(nonatomic) unsigned long long lastSelectedStringIndex; // @synthesize lastSelectedStringIndex=_lastSelectedStringIndex;
@property(retain, nonatomic) UITouch *currentTouch; // @synthesize currentTouch=_currentTouch;
@property(retain, nonatomic) NSString *truncatedRowText; // @synthesize truncatedRowText=_truncatedRowText;
@property(retain, nonatomic) NSDictionary *textAttributes; // @synthesize textAttributes=_textAttributes;
@property(nonatomic) double fontSize; // @synthesize fontSize=_fontSize;
@property(nonatomic) double lineHeight; // @synthesize lineHeight=_lineHeight;
@property(nonatomic) double textSpacing; // @synthesize textSpacing=_textSpacing;
@property(retain, nonatomic) NSMutableArray *indexStrings; // @synthesize indexStrings=_indexStrings;
@property(nonatomic) unsigned long long numberOfIndexes; // @synthesize numberOfIndexes=_numberOfIndexes;
@property(nonatomic) __weak id <TBIMIndexBarDelegate> delegate; // @synthesize delegate=_delegate;
- (void).cxx_destruct;
- (void)updateRectForTextArea;
- (void)updateDisplayedIndexStrings;
- (void)updateNumberOfDisplayableRows;
- (void)updateDesiredHeight;
- (void)resetData;
- (void)initIndexBarWithDelegate:(id)arg1;
- (void)handleTouch:(id)arg1;
- (void)touchesCancelled:(id)arg1 withEvent:(id)arg2;
- (void)touchesEnded:(id)arg1 withEvent:(id)arg2;
- (void)touchesMoved:(id)arg1 withEvent:(id)arg2;
- (void)touchesBegan:(id)arg1 withEvent:(id)arg2;
- (void)drawRect:(struct CGRect)arg1;
- (void)reloadData;
- (id)initWithFrame:(struct CGRect)arg1 delegate:(id)arg2;

@end

