import * as React from "react";

const Input = ({ className, ...props }) => {
  return <input className={`p-2 border rounded w-full ${className}`} {...props} />;
};

export { Input };
