import * as React from "react";

const Card = ({ className, ...props }) => {
  return <div className={`p-4 border rounded bg-white shadow ${className}`} {...props} />;
};

export { Card };
