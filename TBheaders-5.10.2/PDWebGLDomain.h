//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "PDDynamicDebuggerDomain.h"

@protocol PDWebGLCommandDelegate><PDCommandDelegate;

@interface PDWebGLDomain : PDDynamicDebuggerDomain
{
}

+ (id)domainName;
- (void)handleMethodWithName:(id)arg1 parameters:(id)arg2 responseCallback:(CDUnknownBlockType)arg3;

// Remaining properties
@property(nonatomic) id <PDWebGLCommandDelegate><PDCommandDelegate> delegate; // @dynamic delegate;

@end

